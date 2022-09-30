#ifndef _SCHOOL_H_
#define _SCHOOL_H_
#include <stdbool.h>

#define SIZENAME      50
#define SIZEADDRESS   100
#define SIZEGENDER    10
#define NUMSUBJECT    6
#define SIZEWARNING   4

typedef  signed     long  long  int     SLLint    ;
typedef  unsigned   long  long  int     ULLint    ;
typedef  signed     long        int     SLint     ;
typedef  unsigned   long        int     ULint     ;
typedef  signed     short       int     SSint     ;
typedef  unsigned   short       int     USint     ;
typedef  signed                 char    Schar     ;
typedef  unsigned               char    Uchar     ;
typedef                         float   fl        ;
typedef                         double  Sdouble   ;
typedef             long        double  Ldouble   ;


typedef struct DateOfBirth
{
    SSint Day  ;
    SSint Month;
    SLint Year ;
}Birth_Details;



typedef struct DATA
{
    Birth_Details birth ;
    fl TotalGPA;
    SLint ID      ;
    SLint Phone_number;
    SLint flag_marks;
    fl GPA[NUMSUBJECT];
    Schar Gender [SIZEGENDER] ;
    Schar Adress [SIZEADDRESS];
    Schar Name   [SIZENAME];
}DataStudent;

//=======================================================================
//forming doubly linked list
typedef struct Node
{
    DataStudent   data;
    struct Node * PPrev;
    struct Node * PNext;
}NodeStudent;


typedef struct School_Students
{
    NodeStudent * phead  ;
    NodeStudent * ptail  ;
    ULint Student_number ;
}School;

//=======================================================================
//forming tree
struct treeNode
{
    DataStudent  Treedata;
    struct treeNode *Left;
    struct treeNode *Right;
};
typedef struct treeNode TreeNode;
typedef TreeNode* TreeNodePtr;

/*functions prototypes*/

void MAIN_MENU();
void CREATE_SCHOOL(School * PS);
void NEW_STUDENT (School * PS);
NodeStudent * SEARCH_STUDENT( School * PS, SLint id );
void DELETE_STUDENT(School * PS);//problem
void STUDENT_LIST(School * PS);
void STUDENT_EDIT(School * PS);
void RANK_STUDENT(School * PS);
void STUDENT_SCORE(School * PS);
ULint Schoolsize(School* PS);
bool IS_EMPTY(School * PS);

//=======================================================================

void insertNode( TreeNodePtr *treePtr , fl totalgpa , Schar * name , SLint ID );
void ReverseinOrder(TreeNodePtr treePtr );

//=======================================================================

void SCHOOL_MASTER(School * PS);
void ONE_STUDENT(School * PS);
void SCAN_GPA(fl * gpa);
void PRINT_GPA(fl * gpa);
fl CALCUATE_GPA(fl * gpa);

#endif // _SCHOOL_H_



