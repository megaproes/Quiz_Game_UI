import QtQuick 2.14
import QtQuick.Layouts 1.14
import QtQuick.Controls 2.14
import QtQuick.Controls.Material 2.12
import Qt.labs.settings 1.0
import QtQuick.Dialogs 1.3

ApplicationWindow
{
    width: 1200
    height: 380
    visible: true
    title: qsTr("Test app")

    Material.theme: Material.Dark

    readonly property int sSpacing: 10
    readonly property int s2xSpacing: 20

    property var arrOfAnswers : []
    property var numOfQuestions : 0
    property var currentQuestion : 1
    property var currentChoise : -1
    property var numOfCorrectAnsweres : 0
    property var currentCorrectAnser : -1

    function setQuestion(qestion)
    {
        nextBtn.enabled = false
        questionLabel.text = qestion.question

        currentCorrectAnser = qestion.answer

        firstChoise.text = qestion.choices[0]
        secondChoise.text = qestion.choices[1]
        thirdChoise.text = qestion.choices[2]
        fourthChoise.text = qestion.choices[3]
    }

    Column
    {
        id: centerRow
        anchors.centerIn: parent
        Label
        {
            readonly property int offset: (s2xSpacing * 2) + sSpacing
            id: questionLabel
            font.pixelSize: 22
            text: "Some question"

        }


        Column
        {
            id: choices
            RadioButton
            {
                id: firstChoise
                text: qsTr("First")
                onClicked:
                {
                    nextBtn.enabled = true
                    currentChoise = 0
                }
            }

            RadioButton
            {
                id: secondChoise
                text: qsTr("Second")
                onClicked:
                {
                    nextBtn.enabled = true
                    currentChoise = 1
                }
            }

            RadioButton
            {
                id: thirdChoise
                text: qsTr("Third")
                onClicked:
                {
                    nextBtn.enabled = true
                    currentChoise = 2
                }
            }

            RadioButton
            {
                id: fourthChoise
                text: qsTr("Third")
                onClicked:
                {
                    nextBtn.enabled = true
                    currentChoise = 3
                }
            }
        }

        Button
        {
            id: nextBtn
            text: "Next"
            enabled: false
            onClicked:
            {
                if(currentCorrectAnser === currentChoise)
                {
                    numOfCorrectAnsweres++
                }

                arrOfAnswers.push(currentChoise)
                currentChoise = -1

                if(currentQuestion !== numOfQuestions)
                {
                    firstChoise.checked = false
                    secondChoise.checked = false
                    thirdChoise.checked = false
                    fourthChoise.checked = false

                    var question = CQuestions.getQuestion(currentQuestion)
                    setQuestion(question);
                    currentQuestion++
                }
                else
                {
                    messageDialog.open()
                }

            }
        }
    }

    Component.onCompleted :
    {
        numOfQuestions = CQuestions.getNumberOfQuestion()
        var question = CQuestions.getQuestion(0)
        setQuestion(question);
    }

    MessageDialog
    {
        id: messageDialog
        text: "Кількість коректних відповідей: " + numOfCorrectAnsweres
    }

}
