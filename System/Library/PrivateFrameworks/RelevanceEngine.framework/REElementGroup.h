/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REElementGroup : NSObject <REAutomaticExportedInterface, NSCopying> {

	NSString* _groupIdentifier;
	unsigned long long _behavior;
	long long _maxElementCount;

}

@property (nonatomic,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                 //@synthesize maxElementCount=_maxElementCount - In the implementation block
+(id)topElementGroupWithIdentifier:(id)arg1 ;
+(id)adjoiningElementGroupWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)groupIdentifier;
-(void)setBehavior:(unsigned long long)arg1 ;
-(unsigned long long)behavior;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(void)setMaxElementCount:(long long)arg1 ;
-(long long)maxElementCount;
@end

