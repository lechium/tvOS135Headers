/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RESectionPath : NSObject <NSCopying> {

	NSString* _sectionName;
	unsigned long long _element;

}

@property (nonatomic,copy,readonly) NSString * sectionName; 
@property (assign,nonatomic) unsigned long long element;                 //@synthesize element=_element - In the implementation block
+(id)sectionPathWithSectionName:(id)arg1 element:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)element;
-(NSString *)sectionName;
-(void)setElement:(unsigned long long)arg1 ;
-(id)initWithSectionName:(id)arg1 element:(unsigned long long)arg2 ;
@end

