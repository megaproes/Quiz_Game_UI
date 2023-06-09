#include "questions.h"

Questions::Questions()
{
    auto firstQuestion = Question{"Що таке мова програмування?", 0,
    {"Система позначень для точного опису алгоритму, який потрібно виконати за допомогою комп'ютера",
     "Набір команд, які виконуються безпосередньо ЦП",
     "Послідовність дій, виконання яких призводить до повного результату",
     "Немає правильної відповіді"}};

    m_qustions.push_back(firstQuestion);

    auto secondQuestion = Question{"Яка інша назва машинно залежних мов програмування?", 0,
    {"Низького рівня",
     "Універсальні",
     "Високого рівня",
     "Немає правильної відповіді"}};

    m_qustions.push_back(secondQuestion);

    auto thirdQuestion = Question{"Програма, яка записує команди програми, описаної деякою мовою програмування, машиною мовою, називається", 0,
    {"Транслятор",
     "Скрипт",
     "Визначник",
     "Комутатор"}};

    m_qustions.push_back(thirdQuestion);

    auto fourthQuestion = Question{"Середовище містить відокремлені складові, у яких окремо розробляють \n інтерфейс проекту та складають програмний код.\n Про який вид середовища програмування йде мова?", 2,
    {"Навчальне",
     "Інтегроване",
     "Візуальне",
     "Немає правильної відповіді"}};

    m_qustions.push_back(fourthQuestion);

    auto fivethQuestion = Question{"Середовище програмування – це", 0,
    {"Комплекс програм, що містить засоби автоматизації підготовки та виконання програм користувача",
     "Середовище та прийняту систему команд для обробки інформації",
     "Послідовність команд, які користувач може виконувати на комп'ютері",
     "Немає правильної відповіді"}};

    m_qustions.push_back(fivethQuestion);

    auto sixthQuestion = Question{"Алгоритм, який записаний мовою програмування, називається", 1,
    {"Модулем",
     "Програмою",
     "Командою",
     "Немає правильної відповіді"}};

    m_qustions.push_back(sixthQuestion);

    auto seventhQuestion = Question{"Мова для запису команд у машинних  кодах називається", 2,
    {"мовою  програмування  низького  рівня",
     "мовою програмування високого рівня",
     "машинною мовою",
     "об'єктно - орієнтованою мовою програмування"}};

    m_qustions.push_back(seventhQuestion);

    auto eighthQuestion = Question{"Вказівки комп’ютеру на виконання певних дій називаються ", 0,
    {"операторами",
     "умовами",
     "ідентифікаторами",
     "Немає правильної відповіді"}};

    m_qustions.push_back(eighthQuestion);

    auto ninethQuestion = Question{"Мови, що описують алгоритми в термінах команд процесора є", 1,
    {"машинною мовою",
     "мовою програмування низького рівня",
     "мовою програмування високого рівня",
     "Немає правильної відповіді"}};

    m_qustions.push_back(ninethQuestion);

    auto tenthQuestion = Question{"ВКАЖІТЬ , ЩО НЕ ВХОДИТЬ В АЛФАВІТ МОВИ С++", 1,
    {"Цифри 0, 1, …, 9",
     "Великі й малі літери кирилиці",
     "Великі й малі літери латинського алфавіту: A, …, Z, a, …, z",
     "Спеціальні символи: “ ‘()[]{}<>.,;:?!~*+-= / | # % $ & ^ @ _"}};

    m_qustions.push_back(tenthQuestion);


    auto eleventhQuestion = Question{"ЩО ТАКЕ ПРЕПРОЦЕСОР?", 0,
    {"Складова компіляції, яка опрацьовує директиви або команди",
     "Складова системного блоку, що призначена для опрацювання даних",
     "Складова процесора, що призначена для обчислень з плаваючою комою",
     "Немає правильної відповіді"}};

    m_qustions.push_back(eleventhQuestion);
}

Questions::~Questions()
{

}

Question Questions::getQuestion(int numberOfQuestion)
{
    return m_qustions[numberOfQuestion];
}

int Questions::getNumberOfQuestion()
{
    return m_qustions.size();
}
