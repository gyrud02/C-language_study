#include <stdio.h>

// ----------------------------------------
// 문자열 선언의 두가지 방법과 차이점 이해
// ----------------------------------------
main()
{
	char str1[] = "My String";  // 변수 형태의 문자열
	char *str2 = "Your String"; // 상수 형태의 문자열
	printf("str1 = %s, str2 = %s \n\n", str1, str2);

	str2 = "Our String"; // 가리키는 대상 변경 (포인터 변수만 가능)
	printf("str1 = %s, str2 = %s \n\n", str1, str2);

	// ------------------------------------------------------------------
	// 문자열 선언의 위와 같이 두가지 방법 가능하다.
	// 하지만 두가지의 차이점은
	// ------------------------------------------------------------------
	// char *str2 = "Your String"; 의 경우
	// 메모리 공간에 "Your String" 이 저장되고, 
	// 문자열의 첫번째 문자 Y의 주소값이 반환되어 
	// 포인터변수 str2에 저장된다. 
	// ------------------------------------------------------------------
	// 즉 str1은 그 자체로 문자열을 저장하는 배열이고,
	// str2 는 메모리상에 자동으로 저장된 문자열 "Your String"
	// 의 첫번째 문자를 단순히 가리키고 있는 포인터변수이다.
	// ------------------------------------------------------------------
	// 둘간의 차이점 
	// 1) 포인터 변수는 가리키는 위치 변경이 가능하지만 배열은 불가능
	// 2) 배열은 문자열은 값 변경이 가능하지만 포인터 변수 str2 가 가리키는 
	//    문자열은 그 내용의 변경이 불가능하다.
	// ------------------------------------------------------------------
	str1[0] = 'X';  // 문자열 변경 성공
	//str2[0] = 'X';  // 문자열 변경 실패
	printf("str1 = %s, str2 = %s \n\n", str1, str2);
}