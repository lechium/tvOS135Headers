/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIUserAction.h>

@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction {

	TIAutocorrectionList* _candidates;

}

@property (nonatomic,readonly) TIAutocorrectionList * candidates;              //@synthesize candidates=_candidates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIAutocorrectionList *)candidates;
-(id)initWithCandidates:(id)arg1 keyboardState:(id)arg2 ;
@end

