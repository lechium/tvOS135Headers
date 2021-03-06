/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IKJSRWIDependencyDomain, NSArray;

@interface IKJSRWIDependencyDomainEvent : NSObject {

	NSString* _name;
	NSString* _purpose;
	IKJSRWIDependencyDomain* _domain;
	NSArray* _params;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                                   //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomain * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSArray * params;                                     //@synthesize params=_params - In the implementation block
-(NSString *)name;
-(IKJSRWIDependencyDomain *)domain;
-(NSArray *)params;
-(NSString *)purpose;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)selectorString;
-(id)_eventInterfaceStringForImplementation:(BOOL)arg1 ;
-(id)initWithEventDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)eventInterfaceString;
-(id)eventImplementationStringWithSoftLinking:(BOOL)arg1 ;
@end

