/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXRecipient.h>

@class PHMomentShareParticipant;

@interface PXMomentShareParticipantRecipient : PXRecipient {

	PHMomentShareParticipant* _momentShareParticipant;

}

@property (nonatomic,readonly) PHMomentShareParticipant * momentShareParticipant;              //@synthesize momentShareParticipant=_momentShareParticipant - In the implementation block
-(id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4 ;
-(id)initWithMomentShareParticipant:(id)arg1 ;
-(PHMomentShareParticipant *)momentShareParticipant;
@end

