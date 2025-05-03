
# KeyDeliveryAnalogy

## Описание
Этот проект представляет собой простую программу на C++, которая симулирует аналогию доставки ключей в различные здания (Дом, Фабрика, Банк). Программа использует многопоточность для имитации параллельной доставки ключей и мьютексы для обеспечения потокобезопасности. Проект создан на основе задания "Аналогия из жизни" для демонстрации работы с потоками в C++.

## Автор
Проект разработал студент второго курса KDG, ник на GitHub: [KDGOfficial](https://github.com/KDGOfficial).

## Технологии
- Язык: C++
- Библиотеки: `<thread>`, `<mutex>`, `<vector>`, `<chrono>`
- Локализация: `setlocale` для поддержки русского текста

## Установка и запуск
1. Склонируйте репозиторий:
   ```bash
   git clone https://github.com/KDGOfficial/KeyDeliveryAnalogy.git
   ```
2. Перейдите в директорию проекта:
   ```bash
   cd KeyDeliveryAnalogy
   ```
3. Скомпилируйте программу (например, с помощью g++):
   ```bash
   g++ main.cpp -o KeyDeliveryAnalogy
   ```
4. Запустите программу:
   ```bash
   ./KeyDeliveryAnalogy
   ```

## Как работает программа
- Программа создает три потока, каждый из которых отвечает за доставку ключа в одно из зданий: Дом, Фабрика, Банк.
- Используется мьютекс для предотвращения конфликтов при выводе текста в консоль.
- Задержка в 1 секунду (`this_thread::sleep_for`) имитирует время доставки.

## Пример вывода
```
Доставка ключа 1 в Дом
Ключ 1 успешно доставлен в Дом
Доставка ключа 2 в Фабрика
Ключ 2 успешно доставлен в Фабрика
Доставка ключа 3 в Банк
Ключ 3 успешно доставлен в Банк
Все ключи успешно доставлены!
```

## Лицензия
 
```
MIT License

Copyright (c) 2025 KDG

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
`
