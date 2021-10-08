#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct employeeDetails {
  int employeeId;
  char name[20];
  char address[20];

};

void selectionSort(employeeDetails temp[], int n){
  char tempName[20],tempAddress[80];
  int tempId;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n;j++){
      if(strcmp(temp[i].name,temp[j].name)>0)
      {
        strcpy(tempName, temp[i].name);
        strcpy(temp[i].name, temp[j].name);
        strcpy(temp[j].name, tempName);
        strcpy(tempAddress, temp[i].address);
        strcpy(temp[i].address, temp[j].address);
        strcpy(temp[j].address, tempAddress);
        tempId = temp[i].employeeId;
        temp[i].employeeId = temp[j].employeeId;
        temp[j].employeeId = tempId;
      }
    }
  }
}

int main(){
  employeeDetails employee[3] = {{1,"Qwewe","qw"},{2,"wesa","qw"},{3,"awe","qw"}};
  selectionSort(employee, 3);
  // employee[0].name = "ayush";
  // employee[1].name = "lklk";
  // employee[2].name = "aasa";
  for (int i = 0; i < 3;i++){
    cout << employee[i].name<<endl<<employee[i].employeeId<<endl<<employee[i].address<<endl<<endl;

  }
}