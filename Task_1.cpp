#include <iostream>
#include <vector>
#include <string>

// Функция для конкатенации двух языков
std::vector<std::string> concatenateLanguages(const std::vector<std::string>& language1,
    const std::vector<std::string>& language2) {
    std::vector<std::string> concatenatedLanguage;

    // Проходим по всем цепочкам языка L1
    for (const std::string& s1 : language1) {
        // Проходим по всем цепочкам языка L2
        for (const std::string& s2 : language2) {
            // Создаем новую цепочку путем конкатенации цепочек из L1 и L2
            std::string concatenatedString = s1 + s2;
            // Добавляем новую цепочку в язык L1L2
            concatenatedLanguage.push_back(concatenatedString);
        }
    }

    return concatenatedLanguage;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::vector<std::string> language1, language2;

    // Вводим цепочки языка L1
    int n;
    std::cout << "Введите количество цепочек языка L1: ";
    std::cin >> n;
    while (n > 10000) {
        std::cout << "Ошибка: недопустимое количество цепочек для L1/L2\n";
        std::cin >> n;
    }
    std::cout << "Введите цепочки языка L1:\n";
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        while (s.length() > 100) {
            std::cout << "Ошибка: длина цепочки превышает 100 символов\n";
            std::cin >> s;
        }
        language1.push_back(s);
    }

    // Вводим цепочки языка L2
    std::cout << "Введите количество цепочек языка L2: ";
    std::cin >> n;
    while (n > 10000) {
        std::cout << "Ошибка: недопустимое количество цепочек для L1/L2\n";
        std::cin >> n;
    }
    std::cout << "Введите цепочки языка L2:\n";
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        while (s.length() > 100) {
            std::cout << "Ошибка: длина цепочки превышает 100 символов\n";
            std::cin >> s;
        }
        language2.push_back(s);
    }

    // Вызываем функцию для конкатенации языков L1 и L2
    std::vector<std::string> concatenatedLanguage = concatenateLanguages(language1, language2);

    // Выводим цепочки получившегося языка L1L2
    std::cout << "Цепочки получившегося языка L1L2:\n";
    for (const std::string& s : concatenatedLanguage) {
        std::cout << s << "\n";
    }

    return 0;
}
