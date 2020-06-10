/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATException.h>

@class NSArray, NSString;

@interface EDAMInvalidContactsException : FATException {

	NSArray* _contacts;
	NSString* _parameter;
	NSArray* _reasons;

}

@property (nonatomic,retain) NSArray * contacts;                //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSString * parameter;              //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,retain) NSArray * reasons;                 //@synthesize reasons=_reasons - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)reasons;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(NSString *)parameter;
-(void)setReasons:(NSArray *)arg1 ;
-(void)setParameter:(NSString *)arg1 ;
@end

