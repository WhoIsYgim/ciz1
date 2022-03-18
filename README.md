# ciz1
Вариант #31
Создать структуру для хранения информации о военных кораблях: названии корабля при постройке и названии верфи-производителя, годе спуска на воду, а также истории участия в военных кампаниях, численности экипажа и состоянии (в эксплуатации, списан и т.д.). Составить программу вывода информации обо всех кораблях, соответствующих заданным пользователем критериям.

name: ci

on:
  push:
    branches: [ main, dev ]
  pull_request:
      branches: [ main, dev ]

jobs:
    build:
      runs-on: ubuntu-latest

      steps:
        - uses: actions/checkout@v2

        - name: install gtest
          run: sudo apt install libgtest-dev

        - name: build
          run: cmake -B build && cd build && make
    
    test:
      runs-on: ubuntu-latest

      steps:
        - uses: actions/checkout@v2

        - name: install gtest
          run: sudo apt install libgtest-dev

        - name: build
          run: cmake -B build && cd build && make && tests/tests

