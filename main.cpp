#include <iostream>
#include<string>
#include <cwchar>

int main()
{
    std::wstring proposal = L"Когда мы идем сегодня гулять?";
    wchar_t letter = L'г';

    for(const wchar_t elem : proposal)
        if(elem == letter){
            std::wcout << letter; //не работатет
        }
}
//proverka

