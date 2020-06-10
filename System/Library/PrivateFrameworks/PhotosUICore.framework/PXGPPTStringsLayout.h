/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGGridLayout.h>
#import <libobjc.A.dylib/PXGStringSource.h>

@class NSArray, NSDictionary, NSString;

@interface PXGPPTStringsLayout : PXGGridLayout <PXGStringSource> {

	NSArray* _strings;
	NSDictionary* _attributes;

}

@property (nonatomic,copy) NSArray * strings;                       //@synthesize strings=_strings - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;               //@synthesize attributes=_attributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)strings;
-(id)stringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)stringAttributesAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(long long)verticalAlignmentForStringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)initWithStringCount:(unsigned long long)arg1 localeCodes:(id)arg2 ;
@end

