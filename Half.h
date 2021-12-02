//Brennan Catalan
//12/1/2021
//CIS 1202 502
#ifndef H
#define H

#pragma once


template<class T>

T Half(T num) // This is defined in a .h file because it will not work if it is defined in a separate .cpp file. From what I understand, the compiler cannot find the definition for this function if it is in another cpp file because a templated function only represents the function, but does not contain the function code which is only generated once the compiler determines it necessary to do so 
{

	return num / 2; 

}

int Half(int num);
















#endif
