/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface GEMagicResult : NSObject {

	NSString* mimeType;
	NSString* description;
	NSString* uniformType;
	NSArray* uniformTypeHierarchy;

}

@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,copy,readonly) NSString * uniformType; 
@property (nonatomic,copy,readonly) NSArray * uniformTypeHierarchy; 
-(NSString *)description;
-(void)dealloc;
-(NSString *)mimeType;
-(NSString *)uniformType;
-(NSArray *)uniformTypeHierarchy;
-(id)initWithMimeType:(id)arg1 description:(id)arg2 typeHierarchy:(id)arg3 ;
@end
