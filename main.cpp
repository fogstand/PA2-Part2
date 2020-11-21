 //C++ program to print all  
// permutations with duplicates allowed  



#include <bits/stdc++.h> 
#include<string.h>
#include<iostream>
using namespace std; 
#include<bits/stdc++.h> 
using namespace std; 
  
// Function to print all sub strings 
void subString(string str, int n)  
{ 
	ifstream file;
	string fstr;
	file.open("dictWords.txt");
    
    for (int len = 2; len <= n; len++)  
    {     
        
        for (int i = 0; i <= n - len; i++)  
        { 
            //  Print characters from current 
            // starting point to current ending 
            // point.   
            int j = i + len;             
          	string r=str.substr(i,j);
                
             cout << r<<"\n"; 
           file.seekg(0);
           int count=0;

           /*When I comment out the while loop
           part my program prints out all the
           substrings of sample word "winter 
           but when I use these words to compare it words in dictionary my program
           with the help of following code 
           it takes 30-45 mins to give me result
           This is the best I could find 
           Please look at my test cout statement 
           ,I wanted to make sure if I am getting
           into the dictionary and comparing the words, it is happening but 
           as we can see its very slow  and not very neat.
           */
           while(file.eof()==0)
            {
            	//cout<<"in while";
            	file>>fstr;
            	//cout<<fstr<<"\n";
            //	cout<<count++;
              if(r==fstr)
              {
			  cout<<"in if\n";
                    cout << fstr<<"  "<<r<<"\n"; 
             		 break;
                }
        	} 
          
    		}	 
		} 
	}


// Driver program to test above function 
int main()  
{ 
    string str= "winter"; 
    subString(str, str.length()); 
    return 0; 
} 
   
