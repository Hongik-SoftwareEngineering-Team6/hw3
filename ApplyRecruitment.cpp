#pragma once
#include "ApplyRecruitment.h"


ApplyRecruitment::ApplyRecruitment(MemberList* memberList){

	ApplyRecruitmentUI applyRecruitmentUI(this);
	this->applyRecruitmentUI = &applyRecruitmentUI;

	// 사용자 알아내기
	this->nowLoginedMember = (GeneralMember*)memberList->nowLoginedMember;

	// 사업자 번호 입력 받기
	char idNumber[MAX_STRING];
	applyRecruitmentUI.getIdNumber(idNumber);

	// 사업자 번호로 회사회원 찾기
	CompanyMember* companyMember;
	companyMember = memberList->searchCompanyMemberByIdNumber(idNumber);

	// 회사회원에세 채용 정보 찾기
	RecruitmentInfo* recruitmentInfo;
	recruitmentInfo = companyMember->listRecruitment();

	// 일반회원 객체 수정
	this->nowLoginedMember->apply(recruitmentInfo);

	// 채용정보 객체 수정
	recruitmentInfo->applied(nowLoginedMember);

	// 결과 출력
	char work[MAX_STRING];
	int recruitingNumber;
	char deadline[MAX_STRING];
	char companyName[MAX_STRING];
	char work[MAX_STRING];
	recruitmentInfo->getRecruitmentInfo(work, recruitingNumber, deadline, companyName);
	applyRecruitmentUI.printResult(companyName, idNumber, work);
}

