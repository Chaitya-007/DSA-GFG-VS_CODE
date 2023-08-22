#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    string str;
    int in;
    double doub;
    char x;

    // todo:  best way of defining node => create constructor
    node(string str_,int in_,double doub_,char x_)
    {
        str = str_;
        in = in_;
        doub = doub_;
        x = x_;
    } 
}; // ! Don't forget this semicolon


int main()
{
    // ! create node of four datatype
    // ! {string, int, double, char}

    // ! wrong way of defining
   /*
   * node var;
   * var.str = "chaitya";
   * var.in = 1;
   * var.doub = 2.0;
   * var.x = 'a';
    */

    // ! best way 
    struct node chaitya("chaitya",17,56.25,'a');


    return 0;
}