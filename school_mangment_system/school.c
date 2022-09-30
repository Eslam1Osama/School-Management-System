#include <stdio.h>
#include"School.h"
#include"Config.h"
#include<string.h>
#include<stdlib.h>
#include<conio.h>

/*GLOBAL VARIABLES*/

Uchar Continue[SIZEWARNING];
SSint flag;
Uchar warning [SIZEWARNING];
SSint day   ;
SSint month ;
SLint year  ;
fl totalgpa = 0;
SLint id    ;
SLint phone_number ;
Schar gender[SIZEGENDER];
fl gpa[NUMSUBJECT]={0};
Schar name  [SIZENAME];
Schar address[SIZEADDRESS];
SSint choice;
SLint password;


//====================================================================================
void MAIN_MENU(School * PS)
{
    do
    {
        flag = 0 ;
        printf("\n\t     ================= SCHOOL MANAGEMENT SYSTEM =================\n");
        printf("\t\t       ____________________________________");
        printf("\n\n\t\t\t\t(1) You Are Student");
        printf("\n\n\t\t\t\t(2) You Are Master");
        printf("\n\n\t\t\t\t(3) You Are Administrator");
        printf("\n\n\t\t\t\t(4) Exit\n");
        printf("\t\t       ____________________________________");
        printf("\n\n\t\t\tPLZ enter Your Option To Enter System  -->   ");
        scanf("%hi",&choice);
        system("cls");//used to make the screen/terminal clear.
        switch(choice)
        {
            case 1://Student
                printf("\n\t     ================= STUDENT DEPARTMENT =================\n");
                printf("\t\t       ____________________________________");
                ONE_STUDENT(PS);
                printf("\n\t\t===============================");
                printf("\n\n\t\tDo You Want To Continue AT SCHOOL MANAGEMENT SYSTEM : (yes/no): ");
                fflush(stdin); //used to clear the buffer and accept the next string
                fgets(Continue , SIZEWARNING , stdin);
                system("cls");//used to make the screen/terminal clear.
                break;


            case 2://Master
                    SCHOOL_MASTER(PS);
                    printf("\n\t\t===============================");
                    printf("\n\n\t\tDo You Want To Continue AT SCHOOL MANAGEMENT SYSTEM : (yes/no): ");
                    fflush(stdin);//used to clear the buffer and accept the next string
                    fgets(Continue ,SIZEWARNING , stdin);
                    system("cls");//used to make the screen/terminal clear.
                    break;


            case 3://ADMINISTRATOR
                do
                {
                    printf("\n\t     ================= ADMINISTRATOR DEPARTMENT =================\n");
                    printf("\t\t       ____________________________________");
                    printf("\n\n\t\t\t\t(1) Add Student");
                    printf("\n\n\t\t\t\t(2) Remove Student");
                    printf("\n\n\t\t\t\t(3) Show All Student");
                    printf("\n\n\t\t\t\t(4) Modify Student");
                    printf("\n\n\t\t\t\t(5) Rank Student");
                    printf("\n\n\t\t\t\t(6) Score Student");
                    printf("\n\n\t\t\t\t(7) Exit\n");
                    printf("\t\t       ____________________________________");
                    printf("\n\n\t\t\t\tPLZ enter Your Option  -->   ");
                    scanf("%hi",&choice);
                    system("cls");//used to make the screen/terminal clear.
                    flag = 0 ;
                    switch(choice)
                    {
                        case 1://Add student
                            printf("\n\t     ================= ADD STUDENT DEPARTMENT =================\n");
                            printf("\t\t       ____________________________________");
                            NEW_STUDENT (PS);
                            printf("\n\t===================================================================================");
                            printf("\n\n\t\tDo You Want To Continue AT ADMINISTRATOR SYSTEM : (yes/no): ");//if yes it will clear screen and choices of adminstrator reappear
                            fflush(stdin);//used to clear the buffer and accept the next string
                            fgets(Continue , SIZEWARNING , stdin);
                            system("cls");//used to make the screen/terminal clear.
                            break;

                        case 2://delete student
                            printf("\n\t     ================= DELETE STUDENT DEPARTMENT =================\n");
                            printf("\t\t       ____________________________________");
                            DELETE_STUDENT(PS);
                            printf("\n\t===================================================================================");
                            printf("\n\n\t\tDo You Want To Continue AT ADMINISTRATOR SYSTEM : (yes/no): ");
                            fflush(stdin);//used to clear the buffer and accept the next string
                            fgets(Continue , SIZEWARNING , stdin);
                            system("cls");//used to make the screen/terminal clear.
                            break;

                        case 3://show student
                            printf("\n\t     ================= SHOW STUDENT DEPARTMENT =================\n");
                            printf("\t\t       ____________________________________");
                            STUDENT_LIST(PS);
                            printf("\n\t===================================================================================");
                            printf("\n\n\t\tDo You Want To Continue AT ADMINISTRATOR SYSTEM : (yes/no): ");
                            fflush(stdin);//used to clear the buffer and accept the next string
                            fgets(Continue , SIZEWARNING , stdin);
                            system("cls");//used to make the screen/terminal clear.
                            break;

                        case 4://modify student
                            printf("\n\t     ================= MODIFY STUDENT DEPARTMENT =================\n");
                            printf("\t\t       ____________________________________");
                            STUDENT_EDIT(PS);
                            printf("\n\t===================================================================================");
                            printf("\n\n\t\tDo You Want To Continue AT ADMINISTRATOR SYSTEM : (yes/no): ");
                            fflush(stdin);//used to clear the buffer and accept the next string
                            fgets(Continue , SIZEWARNING , stdin);
                            system("cls");//used to make the screen/terminal clear.
                            break;

                        case 5://rank student
                            printf("\n\t     ================= RANK STUDENT DEPARTMENT =================\n");
                            printf("\t\t       ____________________________________");
                            RANK_STUDENT(PS);
                            printf("\n\t===================================================================================");
                            printf("\n\n\t\tDo You Want To Continue AT ADMINISTRATOR SYSTEM : (yes/no): ");
                            fflush(stdin);//used to clear the buffer and accept the next string
                            fgets(Continue , SIZEWARNING , stdin);
                            system("cls");//used to make the screen/terminal clear.
                            break;

                        case 6://score student
                            printf("\n\t     ================= SCORE STUDENT DEPARTMENT =================\n");
                            printf("\t\t       ____________________________________");
                            STUDENT_SCORE(PS);
                            printf("\n\n\t===================================================================================");
                            printf("\n\n\t\tDo You Want To Continue AT ADMINISTRATOR SYSTEM : (yes/no): ");
                            fflush(stdin);//used to clear the buffer and accept the next string
                            fgets(Continue , SIZEWARNING , stdin);
                            system("cls");//used to make the screen/terminal clear.
                            break;

                        case 7://exit
                            break;

                        default:
                        printf("\n\n\t\tWrong Choise Please Choice From List : \n");
                        break;
                    }
                    if( strcmp(Continue,"yes") != 0 )
                       flag++;
                }while(choice != 7 && flag == 0 );
                flag =0;
                printf("\n\n\t\tDo You Want To Continue at school management system : (yes/no): ");// no to end program or yes to clear screen and reappear of list of choices between student, master ,and ADMINISTRATOR
                fflush(stdin);
                fgets(Continue , SIZEWARNING , stdin);
                system("cls");//used to make the screen/terminal clear.
                break;

            case 4:// exit program and terminate sytem
                break;


            default:
                printf("\n\n\t\tWrong Choise Please Choice From List : \n");
                break;
        }
        if( strcmp(Continue,"yes") != 0 )
            flag++;
    }while(choice != 4 && flag ==0);
}


void CREATE_SCHOOL(School * PS)
{
    PS ->phead =NULL;
    PS ->ptail =NULL;
    PS ->Student_number = 0;
}


void NEW_STUDENT (School * PS)
{
    int i;
    NodeStudent *PN =(NodeStudent*)malloc(sizeof(NodeStudent));
    if(PN == NULL)
    {
     printf("Heap is Full\n");
     return;
    }
    printf("\n\n\t\tEnter Full Name Of Student : ");
    fflush(stdin);
    fgets(name , SIZENAME , stdin);
    printf("\n\n\t\tEnter Birth Of Student : ");
    printf("\n\n\t\tDay   : ");
    scanf("%d",&PN->data.birth.Day);
    printf("\t\tMonth : ");
    scanf("%d",&PN->data.birth.Month);
    printf("\t\tYear  : ");
    scanf("%d",&PN->data.birth.Year);
    printf("\n\n\t\tEnter Correct Address Of Student : ");
    fflush(stdin);
    fgets(address , SIZEADDRESS , stdin);
    printf("\n\n\t\tEnter ID Of Student : ");
    scanf("%d",&PN->data.ID );
    printf("\n\n\t\tEnter Phone Number Of Student : ");
    scanf("%d",&PN->data.Phone_number);
    printf("\n\n\t\tEnter Gender Of Student (male | female) : ");
    scanf("%s",&gender);
    //SCAN_GPA(gpa);
    for(i=0; i<NUMSUBJECT; i++)
    {
       PN->data.GPA[i] = gpa[i];
    }
    PN->data.TotalGPA=CALCUATE_GPA(gpa);
    PN->data.flag_marks=0;
    strcpy( PN->data.Gender,gender );
    strcpy( PN->data.Name,name );
    strcpy( PN->data.Adress,address );
    PN->PNext = NULL;
    PN->PPrev = NULL;
    PS->Student_number++;
    if(IS_EMPTY(PS))
    {
        PS->phead=PN;
        PS->ptail=PN;
    }
    else
    {
        NodeStudent* temp = PS->phead;
        while(temp != NULL && strcmp(PN->data.Name,temp->data.Name) > 0 )
        {
            temp = temp->PNext;
        }
        if(temp == PS->phead )// Insert at head
        {
            PN->PNext = PS->phead;
            PS->phead->PPrev = PN;
            PS->phead = PN;
        }
        else if(temp == NULL)//Insert at tail
        {
             PN->PPrev = PS->ptail;
             PS->ptail->PNext = PN;
             PS->ptail= PN;
        }
        else //insert at any where else ( at middle )
        {
           PN->PNext=temp;
           PN->PPrev=temp->PPrev ;
           temp->PPrev->PNext=PN ;
           temp->PPrev=PN;
        }
    }
    #if(ENABLE_DEBUGGING == ENABLE)
    printf("\n\n\t\tStudent With ID %d Is Added ",PN->data.ID);
    #endif
}

NodeStudent * SEARCH_STUDENT( School * PS, SLint id )
{
    if(IS_EMPTY(PS))
    {
        printf("\n\n\t\tSchool Has No Students Now ");
        return NULL;
    }
    else
    {
       NodeStudent * temp = PS->phead;
       while(temp!= NULL && temp->data.ID != id )
       {
           temp = temp->PNext;
       }
        return temp;
    }
}


void DELETE_STUDENT(School * PS)
{
    if(IS_EMPTY(PS))
    {
        printf("\n\n\t\tSchool Has No Students Now !!!");
        return ;
    }
    printf("\n\n\t\tEnter ID Of Student You Want To Delete : ");
    scanf("%d",&id);
    NodeStudent * temp = PS->phead;
    while(temp!= NULL )
    {
        if(temp->data.ID == id)
        {
            break;
        }
        temp = temp->PNext;
    }
    if(temp!= NULL )
    {
        printf("\n\n\t\tWarning Are You Sure That you want to Delete All Data Of Student (yes/no): ");
        fflush(stdin);
        fgets(warning , SIZEWARNING , stdin);
        if(  strcmp(warning,"yes") == 0)
        {
            PS->Student_number--;
            if(PS->phead == PS->ptail)// Delete one node
            {
                free(PS->phead);
                PS->phead=NULL;
                PS->ptail=NULL;
            }
            else if(temp == PS->phead )// Delete head
            {
                PS->phead = temp->PNext;
                PS->phead->PPrev = NULL;
                free(temp);
            }
            else if(temp == PS->ptail)// Delete tail
            {
                PS->ptail = temp->PPrev;
                PS->ptail->PNext= NULL;
                free(temp);
            }
            else
            {
                temp->PNext->PPrev = temp->PPrev;
                temp->PPrev->PNext = temp->PNext;
                free(temp);
            }
        }
    }
    else
    {
        printf("\n\n\t\tThe ID Is Incorrect !!!!!");
        return ;
    }
    #if(ENABLE_DEBUGGING == ENABLE)
    printf("\n\n\t\tStudent With ID %d Is Deleted ",id);
    #endif
}

void STUDENT_LIST(School * PS)
{
    if(IS_EMPTY(PS))
    {
        printf("\n\n\t\tSchool Has No Students Now !!!");
        return ;
    }
    int i=1;
    NodeStudent * temp;
    for( temp=PS->phead ; temp != NULL ; temp = temp->PNext )
    {
        printf("\n\n\t\tStudent Number %d: \n",i);
        printf("\t _______________________________");
        printf("\n\n\t\tThe Name Is : ");
        puts(temp->data.Name);
        printf("\t\tThe Birth Is : ");
        printf("\n\t\tDay   : %d\n",temp->data.birth.Day);
        printf("\t\tMonth : %d\n",temp->data.birth.Month);
        printf("\t\tYear  : %d\n",temp->data.birth.Year);
        printf("\n\t\tThe Address Is : ");
        puts(temp->data.Adress);
        printf("\t\tThe ID Is : %d",temp->data.ID);
        printf("\n\n\t\tThe Phone Number Is : %d",temp->data.Phone_number);
        printf("\n\n\t\tThe Gender Is : ");
        puts(temp->data.Gender);
        if(temp->data.flag_marks==1)
        {
            PRINT_GPA(temp->data.GPA);
        }
        else
        {
            printf("\n\n\t\tThe Marks Did Not Uploded Yet ");
        }
        printf("\n\t\t===============================");
        i++;
    }
    #if(ENABLE_DEBUGGING == ENABLE)
    printf("\n\n\t\tStudent List IS Printed");
    #endif
}


void STUDENT_EDIT(School * PS)
{
    if(IS_EMPTY(PS))
    {
        printf("\n\n\t\tSchool Has No Students Now !!!");
        return ;
    }
    printf("\n\n\t\tEnter ID Of Student  -->   ");
    scanf("%d",&id);
    system("cls");
    NodeStudent * temp = SEARCH_STUDENT(PS,id);
    if(SEARCH_STUDENT(PS,id))
    {
        int option;
        do
        {
            flag = 0;
            printf("\n\n\t\tChoice What You Want To Update In Student Account : ");
            printf("\n\n\t\t\t\t(1) Change Birth");
            printf("\n\n\t\t\t\t(2) Change Address");
            printf("\n\n\t\t\t\t(3) Change Phone");
            printf("\n\n\t\t\t\t(4) Change Gender");
            printf("\n\n\t\t\t\t(5) Change Marks");
            printf("\n\n\t\t\t\t(6) Logout\n");
            printf("\t\t       ____________________________________");
            printf("\n\n\t\t\t\tPLZ enter Your Option  -->   ");
            scanf("%d",&option);
            system("cls");
            switch(option)
            {

                case 1:// for Change Birth
                    printf("\n\n\t\tThe Existing Birth Is : ");
                    printf("\n\t\tDay   : %d\n",temp->data.birth.Day);
                    printf("\t\tMonth : %d\n",temp->data.birth.Month);
                    printf("\t\tYear  : %d",temp->data.birth.Year);
                    printf("\n\n\t\tEnter New birth Of Student : ");
                    printf("\n\n\t\tDay   : ");
                    scanf("%d",&temp->data.birth.Day);
                    printf("\t\tMonth : ");
                    scanf("%d",&temp->data.birth.Month);
                    printf("\t\tYear  : ");
                    scanf("%d",&temp->data.birth.Year);
                    #if(ENABLE_DEBUGGING == ENABLE)
                    printf("\n\n\t\tStudent With ID %d --> Birth Is Changed ",temp->data.ID);
                    #endif
                    printf("\n\n\t===================================================================================");
                    printf("\n\n\t\tDo You Want To Continue AT MODIFY STUDENT DEPARTMENT : (yes/no): ");
                    fflush(stdin);
                    fgets(Continue , SIZEWARNING , stdin);
                    system("cls");
                    break;


                case 2://for Change Address
                    printf("\n\n\t\tThe Existing Address Is : ");
                    puts(temp->data.Adress);
                    printf("\n\t\tEnter New Adsress Of Student : ");
                    fflush(stdin);
                    fgets(temp->data.Adress , SIZEADDRESS , stdin);
                    #if(ENABLE_DEBUGGING == ENABLE)
                    printf("\n\n\t\tStudent With ID %d --> ADDRESS Is Changed ",temp->data.ID);
                    #endif
                    printf("\n\n\t===================================================================================");
                    printf("\n\n\t\tDo You Want To Continue AT MODIFY STUDENT DEPARTMENT : (yes/no): ");
                    fflush(stdin);
                    fgets(Continue , SIZEWARNING , stdin);
                    system("cls");
                    break;


                case 3:// for change phone number
                    printf("\n\n\t\tThe Existing Phone Number Is : %d",temp->data.Phone_number);
                    printf("\n\n\t\tEnter New Phone Number Of Student : ");
                    scanf("%d",&temp->data.Phone_number);
                    #if(ENABLE_DEBUGGING == ENABLE)
                    printf("\n\n\t\tStudent With ID %d --> Phone Is Changed ",temp->data.ID);
                    #endif
                    printf("\n\n\t===================================================================================");
                    printf("\n\n\t\tDo You Want To Continue AT MODIFY STUDENT DEPARTMENT : (yes/no): ");
                    fflush(stdin);
                    fgets(Continue , SIZEWARNING , stdin);
                    system("cls");
                    break;


                case 4:// for change gender type
                    printf("\n\n\t\tThe ExistingGender Is : ");
                    printf("\n\n\t\tEnter Real Gender Of Student (male | female): ");
                    scanf("%s",&temp->data.Gender);
                    #if(ENABLE_DEBUGGING == ENABLE)
                    printf("\n\n\t\tStudent With ID %d --> Gender Is Changed ",temp->data.ID);
                    #endif
                    printf("\n\n\t===================================================================================");
                    printf("\n\n\t\tDo You Want To Continue AT MODIFY STUDENT DEPARTMENT : (yes/no): ");
                    fflush(stdin);
                    fgets(Continue , SIZEWARNING , stdin);
                    system("cls");
                    break;


                case 5:// for change markes
                    if(temp->data.flag_marks == 1)
                    {
                        SCAN_GPA(temp->data.GPA);
                        CALCUATE_GPA(temp->data.GPA);
                        temp->data.TotalGPA = CALCUATE_GPA(temp->data.GPA);

                    }
                    else
                    {
                        printf("\n\n\t\tThe Marks Did Not Uploded Yet Wait to Uploded And Modify Them ");
                        printf("\n\t\t===============================");
                    }
                    #if(ENABLE_DEBUGGING == ENABLE)
                    printf("\n\n\t\tStudent With ID %d --> Marks Is Changed ",temp->data.ID);
                    #endif
                    printf("\n\n\t===================================================================================");
                    printf("\n\n\t\tDo You Want To Continue AT MODIFY STUDENT DEPARTMENT : (yes/no): ");
                    fflush(stdin);
                    fgets(Continue , SIZEWARNING , stdin);
                    system("cls");
                    break;


                case 6:// to log out
                    break;


                default:
                    printf("\n\n\t\tWrong Choise Please Choice From List : \n");
                    break;
            }
            if( strcmp(Continue,"yes") != 0 )
                flag++;
        }while(option != 6 && flag == 0);
        flag =0;
    }
    else
    {
        printf("\n\n\t\tThe ID Is Incorrect !!!!!");
        return ;
    }
}


void RANK_STUDENT(School * PS)
{
    if(IS_EMPTY(PS))
    {
        printf("\n\n\t\tSchool Has No Students Now !!!");
        return ;
    }
    TreeNodePtr rootPtr = NULL;
    NodeStudent * temp;
    for( temp=PS->phead ; temp != NULL ; temp = temp->PNext )
    {
        if(temp->data.flag_marks == 1)
        {
            insertNode(&rootPtr , temp->data.TotalGPA , temp->data.Name ,temp->data.ID);
        }
    }
    ReverseinOrder(rootPtr);
    #if(ENABLE_DEBUGGING == ENABLE)
    printf("\n\n\t\tStudent Rank List IS Printed",id);
    #endif
}


void STUDENT_SCORE(School * PS)
{
    if(IS_EMPTY(PS))
    {
        printf("\n\n\t\tSchool Has No Students Now !!!");
        return ;
    }
    int i=1;
    NodeStudent * temp;
    for( temp=PS->phead ; temp != NULL ; temp = temp->PNext )
    {
        printf("\n\n\t\tStudent Number %d: \n",i);
        printf("\n\n\t\tName : ");
        puts(temp->data.Name);
        printf("\t _______________________________\n");
        SCAN_GPA(temp->data.GPA);
        CALCUATE_GPA(temp->data.GPA);
        temp->data.TotalGPA = CALCUATE_GPA(temp->data.GPA);
        temp->data.flag_marks = 1;
        printf("\n\t ===============================");
        i++;
    }
    #if(ENABLE_DEBUGGING == ENABLE)
    printf("\n\n\t\tStudents In School Are Scored",id);
    #endif
}


void insertNode( TreeNodePtr *treePtr , fl totalgpa , Schar * name , SLint id )
{
    if ( *treePtr == NULL )
    {
        *treePtr =(TreeNode*) malloc( sizeof( TreeNode ) );
        if ( *treePtr != NULL )
        {
			 (*treePtr)->Treedata.TotalGPA = totalgpa ;
			 (*treePtr)->Treedata.ID = id ;
              strcpy( (*treePtr)->Treedata.Name ,name );
			 (*treePtr)->Left  = NULL;
			 (*treePtr)->Right = NULL;
        }
		 else
        {
		     printf( "\n\n\t\tNo memory available In Heap\n");
        }
    }
    else
    {
		if ( totalgpa <= ( (*treePtr)->Treedata.TotalGPA ) )
        {
			insertNode( &( (*treePtr)->Left), totalgpa , name , id);
		}
		else if ( totalgpa > ( (*treePtr)->Treedata.TotalGPA ) )
        {
			insertNode( &( (*treePtr)->Right), totalgpa , name , id );
		}
 	}
 }

 void ReverseinOrder(TreeNodePtr treePtr)
{
	/* if tree is not empty then traverse */
	if ( treePtr != NULL )
    {
        ReverseinOrder( treePtr->Right );
        printf("\n\n\t\tStudent name : ");
        puts(treePtr->Treedata.Name);
        printf("\t\tThe ID IS : %d  ---->", treePtr->Treedata.ID);
        printf("\tThe GPA IS : %.2f", treePtr->Treedata.TotalGPA);
        printf("\n\t\t _______________________________\n");
        ReverseinOrder( treePtr->Left );
	} /* end if */
}

/* end functions inOrder */
//=======================================================================================================


void SCHOOL_MASTER(School * PS)
{
    if(IS_EMPTY(PS))
    {
        printf("\n\t     ================= MASTER DEPARTMENT =================\n");
        printf("\t\t       ____________________________________");
        printf("\n\n\t\tSchool Has No Students Now ");
    }
    else
    {
            flag = 0 ;
            printf("\n\t     ================= MASTER DEPARTMENT =================\n");
            printf("\t\t       ____________________________________");
            printf("\n\n\t\t\t\t(1) Want To See Marks");
            printf("\n\n\t\t\t\t(2) Want To Modify Marks");
            printf("\n\n\t\t\t\t(3) Exit\n");
            printf("\t\t       ____________________________________");
            printf("\n\n\t\t\tEnter Your Option To Enter System  -->   ");
            scanf("%d",&choice);
            system("cls");
            switch(choice)
            {
               case 1://see
                   printf("\n\t     ================= MASTER DEPARTMENT =================\n");
                   printf("\t\t       ____________________________________");
                   printf("\n\n\t\t\t\t(1) Display All Markes OF School");
                   printf("\n\n\t\t\t\t(2) Display Markes OF One Student\n");
                   printf("\t\t       ____________________________________");
                   printf("\n\n\t\t\tEnter Your Option To Enter System  -->   ");
                   scanf("%d",&choice);
                   system("cls");
                   if(choice == 1)
                   {
                       int i=1;
                       printf("\n\t     ================= MASTER DEPARTMENT =================\n");
                       printf("\t\t       ____________________________________");
                       NodeStudent * temp;
                       for( temp=PS->phead ; temp != NULL ; temp = temp->PNext )
                       {
                           printf("\n\n\t\tStudent Number %d: \n",i);
                           printf("\t\tName : ");
                           puts(temp->data.Name);
                           printf("\t _______________________________");
                           if(temp->data.flag_marks == 1)
                           {
                               PRINT_GPA(temp->data.GPA);
                           }
                           else
                           {
                               printf("\n\n\t\tThe Marks Did Not Uploded Yet ");
                           }
                           i++;
                           printf("\n\t ===============================");
                       }
                   }
                   else if(choice == 2)
                   {
                       printf("\n\n\t\t\tPLZ enter The ID Of Student  -->   ");
                       scanf("%d",&id);
                       NodeStudent * temp = SEARCH_STUDENT(PS , id);
                       if(temp == NULL)
                       {
                          printf("\n\n\t\tThe ID Is Incorrect !!!!!");
                       }
                       else
                       {
                           printf("\n\n\t\tStudent : ");
                           puts(temp->data.Name);
                           if(temp->data.flag_marks == 1)
                           {
                               PRINT_GPA(temp->data.GPA);
                           }
                           else
                           {
                               printf("\n\n\t\tThe Marks Did Not Uploded Yet ");
                           }
                        }
                    }
                    else
                    {
                        printf("\n\n\t\tWrong Choise Please Enter Again \n");
                    }
                    break;

               case 2://want to modify marks
                    printf("\n\t     ================= MASTER DEPARTMENT =================\n");
                    printf("\t\t       ____________________________________");
                    printf("\n\n\t\t\t\t(1) Modify All Markes OF School");
                    printf("\n\n\t\t\t\t(2) Modify Markes OF One Student\n");
                    printf("\t\t       ____________________________________");
                    printf("\n\n\t\t\tPLZ enter Your Option To Enter System  -->   ");
                    scanf("%d",&choice);
                    system("cls");
                    if(choice == 1)
                    {
                       printf("\n\t     ================= MASTER DEPARTMENT =================\n");
                       printf("\t\t       ____________________________________");
                       STUDENT_SCORE(PS);
                    }
                    else if(choice == 2)
                    {
                       printf("\n\n\t\t\tEnter The ID Of Student  -->   ");
                       scanf("%ld",&id);
                       NodeStudent * temp = SEARCH_STUDENT(PS,id);
                       if(temp == NULL)
                       {
                          printf("\n\n\t\tThe ID Is Incorrect !!!!!");
                       }
                       else
                       {
                           if(temp->data.flag_marks == 1)
                           {
                               printf("\n\n\t\tStudent : ");
                               puts(temp->data.Name);
                               printf("\t\t       ____________________________________");
                               SCAN_GPA(temp->data.GPA);
                               CALCUATE_GPA(temp->data.GPA);
                           }
                           else
                           {
                               printf("\n\n\t\tThe Marks Did Not Uploded Yet Wait to Uploded And Modify Them ");
                               printf("\n\t\t===============================");
                           }
                       }
                    }
                   break;

                   case 3://exit
                   break;

                   default://in case of choice is > 3
                   printf("\n\n\t\tWrong Choise Please Choice From List Again : \n");
                   break;
            }
    }

}




void ONE_STUDENT(School * PS)
{
    if(IS_EMPTY(PS))
    {
        printf("\n\n\t\tSchool Has No Students Now ");
    }
    else
    {
        printf("\n\n\t\t\tEnter Your ID -->   ");
        scanf("%d",&id);
        NodeStudent * temp = SEARCH_STUDENT(PS,id);
        if(temp==NULL)
        {
            printf("\n\n\t\tThe ID Is Incorrect !!!!!");
        }
        else
        {
            printf("\n\n\t\tWelcome : ");
            puts(temp->data.Name);
            if(temp->data.flag_marks == 1)
            {
                PRINT_GPA(temp->data.GPA);
            }
            else
            {
                printf("\n\n\t\tThe Marks Did Not Uploded Yet ");
            }
        }
    }
}


ULint Schoolsize(School* PS)
{
     return PS->Student_number;
}


bool IS_EMPTY(School * PS)
{
    return(PS->phead == NULL);
}

//===============================================================
/*FUNCTIONS RELATED TO GPA */
void SCAN_GPA(fl * gpa)
{
    int i=0;
    printf("\n\n\t\tPLZ enter GPA Of 6 Subjects : ");
    printf("\n\t\tGerman       : ");
    scanf("%f",&gpa[i]);
    i++;
    printf("\t\tmathematics    : ");
    scanf("%f",&gpa[i]);
    i++;
    printf("\t\tChemistry      : ");
    scanf("%f",&gpa[i]);
    i++;
    printf("\t\tPhysics        : ");
    scanf("%f",&gpa[i]);
    i++;
    printf("\t\tEnglish        : ");
    scanf("%f",&gpa[i]);
    i++;
    printf("\t\tArabic         : ");
    scanf("%f",&gpa[i]);
}


void PRINT_GPA(fl * gpa)
{
    int i=0;
    printf("\n\n\t\tThe Marks Is : ");
    printf("\n\t\tGerman            : %.2f",gpa[i]);
    i++;
    printf("\n\t\tmathematics       : %.2f",gpa[i]);
    i++;
    printf("\n\t\tChemistry         : %.2f",gpa[i]);
    i++;
    printf("\n\t\tPhysics           : %.2f",gpa[i]);
    i++;
    printf("\n\t\tEnglish           : %.2f",gpa[i]);
    i++;
    printf("\n\t\tArabic            : %.2f",gpa[i]);
    printf("\n\t\t_______________________________");
    printf("\n\t\tThe GPA IS : %.2f",CALCUATE_GPA(gpa));
}


fl CALCUATE_GPA(fl * gpa)
{
    int i=0;
    fl sum=0.0,avr;
    for(i ; i<NUMSUBJECT ; i++)
    {
        sum += gpa[i];
    }
    avr = sum / NUMSUBJECT ;
    return avr;
}

//=====================================================================
