// LinkedList.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>
#include "LinkedList.h"

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>

TEST_CASE("test PushBack", "[PushBack]")
{
    List a;
    a.PushBack(2);
    a.PushBack(5);
    CHECK(a.PopBack() == 5);
}

TEST_CASE("test PushFront", "[PushFront]")
{
    List a;
    a.PushFront(2);
    a.PushFront(7);
    CHECK(a.PopFront() == 7);
}

TEST_CASE("test PopBack", "[PopBack]")
{
    List a;
       
    CHECK_THROWS(a.PopBack());
}

TEST_CASE("test PopFront", "[PopFront]")
{
    List a;
    
    CHECK_THROWS(a.PopFront());
}



int main()
{
    return Catch::Session().run();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
