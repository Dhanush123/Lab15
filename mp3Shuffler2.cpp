﻿// Lab 15
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <deque>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include <ctime>
#include <cstdlib>

struct lastFive{
    string lastSong;
};

int main(){
	 srand(time(0));
	 ifstream fin;
	 cout << "Programmer: Dhanush Patel" << endl;
	 cout << "Description: This program asks the user to play songs." << endl;
	 cout << endl;

	 string inputFile = "songs.txt";
	 fin.open(inputFile);

	 const int MAX_SONGS = 200;
	 int nSongs = 0;
	 string song[MAX_SONGS];

	 deque<lastFive> aLastFive;
	 lastFive aSong;

	 bool continueMusic;
	 bool recent = false;
	 
	 while(fin.good()){
		   string line;
		   getline(fin, line);
		   if(nSongs < MAX_SONGS){
			song[nSongs++]=line;
		   }
	 }

	 fin.close();
     char answer;
		 do{
		     
         cout << "play a song [Y/N]?: ";
         cin >> answer;
         cin.ignore(1000,10);
         if(answer=='Y' || answer=='y'){
             string songShow = "";
             do{
        	 continueMusic = true;
             int index = rand() % 200 + 1;
             songShow = song[index];
                 for(int i = 0; i < aLastFive.size(); i++){
                     if((aLastFive[i].lastSong).compare(songShow) == 0){
                         recent = true;
                     }
                 }
                 if(aLastFive.size() > 5){
                     aLastFive.pop_front();
                   for(int i = 0; i < aLastFive.size(); i++){
                       cout << "part of 5 list: " << aLastFive[i].lastSong << endl;
                      }
                   }
             }while(recent);
            cout << songShow << endl;
            aSong.lastSong = songShow;
            aLastFive.push_back(aSong);
         }
         else if(answer=='N' || answer=='n'){
             continueMusic = false;
         }
         
		 }while(continueMusic);

		 if(!continueMusic){
			 return 0;
		 }

}