/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNInhibitor.h>

@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor {

	NSProcessInfo* _processInfo;

}

@property (nonatomic,retain) NSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
-(id)init;
-(void)start;
-(void)stop;
-(NSProcessInfo *)processInfo;
-(id)initWithProcessInfo:(id)arg1 ;
-(void)setProcessInfo:(NSProcessInfo *)arg1 ;
@end

