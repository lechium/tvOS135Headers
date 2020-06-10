/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSSet, NSDictionary;

@interface EDAMLazyMap : FATObject {

	NSSet* _keysOnly;
	NSDictionary* _fullMap;

}

@property (nonatomic,retain) NSSet * keysOnly;                    //@synthesize keysOnly=_keysOnly - In the implementation block
@property (nonatomic,retain) NSDictionary * fullMap;              //@synthesize fullMap=_fullMap - In the implementation block
+(id)structName;
+(id)structFields;
-(NSSet *)keysOnly;
-(void)setKeysOnly:(NSSet *)arg1 ;
-(NSDictionary *)fullMap;
-(void)setFullMap:(NSDictionary *)arg1 ;
@end

