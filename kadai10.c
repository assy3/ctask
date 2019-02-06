#include <stdio.h>


/********************************/
/*	定数						*/
/********************************/
#define D_PRIORITY_MAX (100)		/* プライオリティの最大値 */


/********************************/
/*	型定義						*/
/********************************/
typedef void (*FuncPnt)(char * string);		/* 関数ポインタ */


/********************************/
/*	構造体						*/
/********************************/
typedef struct TagTask
{
	int priority;		/* プライオリティ */
	FuncPnt Func;		/* 関数ポインタ */
	char * Param;		/* 値 */
} Task;
typedef const Task CTask;


/********************************/
/*	関数宣言					*/
/********************************/
static void PrintStringPart0( char * string );
static void PrintStringPart1( char * string );
static void PrintStringPart2( char * string );
static void PrintStringPart3( char * string );
static void ExecTask( CTask * taskTable, int size );


/********************************/
/*	テーブル					*/
/********************************/
static CTask dTaskTable[] = {
				{ 0, &PrintStringPart0, "" },
				{ 6, &PrintStringPart2, "これで君も一人前" },
				{ 7, &PrintStringPart1, "　　　　　∧∧(┃└(o)──(o) ─ (o) ┘┃)" },
				{ 3, &PrintStringPart1, "　　　　　　　　　　　ヽヽ´･ω･`) 　　" },
				{ 22, &PrintStringPart1, "　　　　～(_ｕ,ｕﾉ　＠ﾐ_ｕ,,ｕﾐ　＠(;ｕｕﾉ" },
				{ 13, &PrintStringPart1, "　　　　 .:O☆ ヽ、　　 　　 　　 　　( )-( )☆" },
				{ 8, &PrintStringPart1, "　　　　(´･ω･|ヽ┃(:ﾟ:)┃(:ﾟ:)┃,　 ∧∧☆　" },
				{ 5, &PrintStringPart1, "　　　　　　　　 ┌─────○───┐" },
				{ 10, &PrintStringPart1, "　　　　 つ(:ﾟ:|　\"'''ーー----\"-―\"~(´･ω･`) " },
				{ 21, &PrintStringPart1, "　　　　　 (・∀・) 　 ﾐ・∀・ﾐ 　 (・∀・)" },
				{ 1, &PrintStringPart1, "　　　　　　　　　　　∩　　∧∧　" },
				{ 11, &PrintStringPart1, "　　　　 ( )-  |　　　　　　　　　　 ゞっと)" },
				{ 20, &PrintStringPart1, "　　　　　　∧,,∧ 　　 ∧,,∧　　　∧,,▲" },
				{ 15, &PrintStringPart1, "　　　　,_☆ :∂ｉo,\"''ーー------―'',\"☆ ♪◎o.:." },
				{ 18, &PrintStringPart1, "　　 ◇☆。:゜ ◎::O☆♪★∝ ☆｡∂:o゜♪★☆｡" },
				{ 19, &PrintStringPart1, "" },
				{ 23, &PrintStringPart0, "" },
				{ 25, &PrintStringPart3, "" },
};


/********************************/
/*	関数						*/
/********************************/

/************************************************************/
/*	関数名	：main											*/
/*	引数	：なし											*/
/*	戻り値	：なし											*/
/*	説明	：メイン関数									*/
/************************************************************/
void main( void )
{
	ExecTask( dTaskTable, ( sizeof( dTaskTable ) / sizeof( Task ) ) );
}

/************************************************************/
/*	関数名	：ExecTask										*/
/*	引数	：taskTable	関数テーブルのポインタ				*/
/*			  size		テーブルのサイズ					*/
/*	戻り値	：なし											*/
/*	説明	：テーブルに格納されている各要素の関数を		*/
/*			  プライオリティ順(0が一番最初)に実行する。		*/
/*			  関数を実行する際には、						*/
/*			  各要素の値を引数として関数に渡すこと			*/
/************************************************************/
static void ExecTask( CTask * taskTable, int size )
{
		printf("%d %x %s\n", taskTable[0]);
	/* この関数の処理を完成させること */
}

/************************************************************/
/*	関数名	：PrintStringPart0								*/
/*	引数	：string										*/
/*	戻り値	：なし											*/
/*	説明	：改行を表示する								*/
/************************************************************/
static void PrintStringPart0( char * string )
{
	printf( "\n" );
}

/************************************************************/
/*	関数名	：PrintStringPart1								*/
/*	引数	：string										*/
/*	戻り値	：なし											*/
/*	説明	：引数の値を改行付きで表示する					*/
/************************************************************/
static void PrintStringPart1( char * string )
{
	printf( "%s\n", string );
}

/************************************************************/
/*	関数名	：PrintStringPart2								*/
/*	引数	：string										*/
/*	戻り値	：なし											*/
/*	説明	：特定図形+引数の値を改行付きで表示する			*/
/************************************************************/
static void PrintStringPart2( char * string )
{
	printf( "　　　　　　　 ∫│%s!!│(o)\n", string );
}

/************************************************************/
/*	関数名	：PrintStringPart3								*/
/*	引数	：string										*/
/*	戻り値	：なし											*/
/*	説明	：処理を一時停止させる							*/
/************************************************************/
static void PrintStringPart3( char * string )
{
	int tmp;

	printf("停止用\n");
	scanf("%d", &tmp);
}
