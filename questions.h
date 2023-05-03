#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <QObject>
#include <QList>

class Question
{
    Q_GADGET
    Q_PROPERTY(int answer READ getAnswer WRITE setAnswer)
    Q_PROPERTY(QString question READ getQuestion WRITE setQuestion)
    Q_PROPERTY(QList<QString> choices READ getChoices WRITE setChoices)

    int m_answer;
    QString m_question;
    QList<QString> m_choices;

public:
    Question(const QString& q, int ans, const QList<QString>& choices):
        m_question(q),
        m_answer(ans),
        m_choices(choices)
    {}
    Question()
    {}
    ~Question()
    {}
    int getAnswer() const
    {
        return m_answer;
    }
    QString getQuestion() const
    {
        return m_question;
    }

    QList<QString> getChoices() const
    {
        return m_choices;
    }

public slots:

    void setAnswer(int answer)
    {
        m_answer = answer;
    }
    void setQuestion(QString question)
    {
        m_question = question;
    }
    void setChoices(QList<QString> choices)
    {
        m_choices = choices;
    }
};

class Questions: public QObject
{
    Q_OBJECT
    QList<Question> m_qustions;
public:
    Questions();
    virtual ~Questions();
    Q_INVOKABLE Question getQuestion(int numberOfQuestion);
    Q_INVOKABLE int getNumberOfQuestion();
};

Q_DECLARE_METATYPE(Question);
#endif // QUESTIONS_H
