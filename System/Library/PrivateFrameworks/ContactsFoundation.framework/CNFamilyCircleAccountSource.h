/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDelegateAccountSource.h>

@class FAFamilyCircle, NSString;

@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource> {

	FAFamilyCircle* _familyCircle;

}

@property (nonatomic,readonly) FAFamilyCircle * familyCircle;              //@synthesize familyCircle=_familyCircle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(FAFamilyCircle *)familyCircle;
-(id)initWithFamilyCircle:(id)arg1 ;
-(id)delegateAccounts;
-(id)primaryAccount;
-(id)myFamilyMemberRecord;
@end
