/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMCharacteristic, NSSet;

@interface HFCustomCharacteristicActionSuggestionResult : NSObject {

	BOOL _isMutuallyExclusiveAction;
	HMCharacteristic* _characteristic;
	id _targetValue;
	NSSet* _matchingExistingActions;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;                 //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id targetValue;                                    //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,copy,readonly) NSSet * matchingExistingActions;              //@synthesize matchingExistingActions=_matchingExistingActions - In the implementation block
@property (assign,nonatomic) BOOL isMutuallyExclusiveAction;                      //@synthesize isMutuallyExclusiveAction=_isMutuallyExclusiveAction - In the implementation block
-(HMCharacteristic *)characteristic;
-(id)targetValue;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 matchingActions:(id)arg3 ;
-(void)setIsMutuallyExclusiveAction:(BOOL)arg1 ;
-(NSSet *)matchingExistingActions;
-(BOOL)isMutuallyExclusiveAction;
@end
