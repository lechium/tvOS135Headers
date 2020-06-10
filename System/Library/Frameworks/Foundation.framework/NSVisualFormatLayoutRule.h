/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSString, NSDictionary, NSLayoutRect;

@interface NSVisualFormatLayoutRule : NSObject <NSLayoutRule> {

	NSString* _visualFormatString;
	unsigned long long _formatOptions;
	NSDictionary* _metricMapping;
	NSDictionary* _rectMapping;
	NSLayoutRect* _containerRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
+(id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5 ;
+(id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSString *)identifier;
-(id)makeChildRules;
-(NSString *)ruleDescription;
-(id)initWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5 ;
@end

