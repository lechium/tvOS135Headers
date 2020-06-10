/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString, NSNumber;

@interface HFIncrementalStateIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _shouldForceLTR;
	NSString* _identifier;
	NSNumber* _incrementalState;

}

@property (nonatomic,readonly) NSNumber * incrementalState;              //@synthesize incrementalState=_incrementalState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceLTR;                      //@synthesize shouldForceLTR=_shouldForceLTR - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)shouldForceLTR;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
-(NSNumber *)incrementalState;
-(id)initWithIdentifier:(id)arg1 incrementalState:(id)arg2 ;
@end

