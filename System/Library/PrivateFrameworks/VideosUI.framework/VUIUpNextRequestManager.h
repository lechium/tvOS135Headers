/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VUIUpNextRequestManager : NSObject {

	NSMutableDictionary* _ongoingCanonicalIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingCanonicalIDOperationDictionary;              //@synthesize ongoingCanonicalIDOperationDictionary=_ongoingCanonicalIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)sendRequestForCanonicalID:(id)arg1 action:(unsigned long long)arg2 ;
-(NSMutableDictionary *)ongoingCanonicalIDOperationDictionary;
-(void)setOngoingCanonicalIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end
