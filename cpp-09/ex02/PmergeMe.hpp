#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>
#include <ctime>

template <typename T>
void printContainer(T &con)
{
    if (con.size() <= 5)
    {
        for (size_t i = 0; i < con.size(); i++)
            std::cout << con[i] << " ";
        std::cout << std::endl;
        return;
    }
    for (size_t i = 0; i < 5; i++)
        std::cout << con[i] << " ";
    std::cout << "[...]\n";
}

template <typename T>
void mergeCon(T &left, T &right, T &con)
{
    typename T::iterator itLeft = left.begin();
    typename T::iterator itRight = right.begin();
    typename T::iterator itCon = con.begin();
    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft <= *itRight)
            *itCon = *itLeft++;
        else
            *itCon = *itRight++;
        itCon++;
    }
    while (itLeft != left.end())
        *itCon++ = *itLeft++;
    while (itRight != right.end())
        *itCon++ = *itRight++;

}

template <typename T>
void mergeSort(T &con)
{
    size_t size = con.size();
    if (size < 8)
        return;
    int mid = size / 2;
    T left(con.begin(), con.begin() + mid);
    T right(con.begin() + mid, con.end());
    mergeSort(left);
    mergeSort(right);
    mergeCon(left, right, con);
}

template <typename T>
void insertionSort(T &con)
{
    for (size_t i = 1; i < con.size(); i++)
    {
        int j = i-1;
        size_t tmp = con[i];
        while (j >= 0 && con[j] > tmp)
        {
            con[j+1] = con[j];
            j--;
        }
        con[j+1] = tmp;
    }
}

template <typename T>
void sortMyContainer(T &con)
{
    mergeSort(con);
    insertionSort(con);
}


template <typename T>
double sortFunction(T &con)
{
    clock_t start = clock();
    sortMyContainer(con);
    clock_t end = clock();

    return (double)(end - start) / CLOCKS_PER_SEC * 1e3;
}


int parseParams(std::vector<size_t> &vec,std::deque<size_t> &deq,char **v);
std::vector<std::string> parseArgv(char **v);
std::vector<std::string> split(const std::string& toBeSplited, char delemiter);