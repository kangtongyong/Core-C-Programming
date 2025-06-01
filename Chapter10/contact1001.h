#pragma once
#ifndef _CONTACT_H_129847575
#define _CONTACT_H_129847575


enum gender { MAN, WOMAN };
typedef enum gender EGender;

struct contact {
	char name[24];
	char phone[24];
	EGender gender;
	int year;
};

typedef struct contact contact1001;

int isEqualContact(contact1001 a, contact1001 b);
void printContact(contact1001 ct);
int isEqualContactPtr(contact1001 *a, contact1001 *b);
void printContactPtr(contact1001 *ct);


#endif //_CONTACT_H_129847575 