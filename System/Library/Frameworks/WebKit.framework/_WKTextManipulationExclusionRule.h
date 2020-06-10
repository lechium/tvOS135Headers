/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSString;

@interface _WKTextManipulationExclusionRule : NSObject {

	BOOL _isExclusion;
	RetainPtr<NSString>* _elementName;
	RetainPtr<NSString>* _attributeName;
	RetainPtr<NSString>* _attributeValue;
	RetainPtr<NSString>* _className;

}

@property (nonatomic,readonly) BOOL isExclusion;                       //@synthesize isExclusion=_isExclusion - In the implementation block
@property (nonatomic,readonly) NSString * elementName; 
@property (nonatomic,readonly) NSString * attributeName; 
@property (nonatomic,readonly) NSString * attributeValue; 
@property (nonatomic,readonly) NSString * className; 
-(NSString *)className;
-(NSString *)attributeValue;
-(NSString *)attributeName;
-(NSString *)elementName;
-(BOOL)isExclusion;
-(id)initExclusion:(BOOL)arg1 forElement:(id)arg2 ;
-(id)initExclusion:(BOOL)arg1 forAttribute:(id)arg2 value:(id)arg3 ;
-(id)initExclusion:(BOOL)arg1 forClass:(id)arg2 ;
@end

