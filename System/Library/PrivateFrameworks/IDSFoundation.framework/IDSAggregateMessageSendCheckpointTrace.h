/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class APSOutgoingMessageCheckpointTrace;

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace {

	APSOutgoingMessageCheckpointTrace* _apsMessageTrace;

}

@property (nonatomic,retain) APSOutgoingMessageCheckpointTrace * apsMessageTrace;              //@synthesize apsMessageTrace=_apsMessageTrace - In the implementation block
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(APSOutgoingMessageCheckpointTrace *)apsMessageTrace;
-(void)setApsMessageTrace:(APSOutgoingMessageCheckpointTrace *)arg1 ;
@end
