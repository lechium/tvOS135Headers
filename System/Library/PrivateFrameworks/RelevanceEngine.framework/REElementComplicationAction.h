/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@class NSString;

@interface REElementComplicationAction : REElementAction {

	NSString* _slotIdentifier;

}

@property (nonatomic,readonly) NSString * slotIdentifier;              //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)slotIdentifier;
-(void)_performWithContext:(id)arg1 ;
-(id)initWithSlotIdentifier:(id)arg1 ;
@end
