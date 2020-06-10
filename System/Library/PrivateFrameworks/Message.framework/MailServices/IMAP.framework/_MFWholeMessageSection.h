/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMessageDataSection.h>

@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection> {

	MFDataHolder* _dataHolder;

}

@property (nonatomic,retain) MFDataHolder * dataHolder;              //@synthesize dataHolder=_dataHolder - In the implementation block
-(void)dealloc;
-(BOOL)isComplete;
-(id)partName;
-(MFDataHolder *)dataHolder;
-(BOOL)isPartial;
-(void)setDataHolder:(MFDataHolder *)arg1 ;
@end

