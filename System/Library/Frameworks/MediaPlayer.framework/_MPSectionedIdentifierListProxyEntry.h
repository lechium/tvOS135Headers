/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationResult.h>

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult> {

	long long _entryType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType;                 //@synthesize entryType=_entryType - In the implementation block
+(id)endEntry;
+(id)startEntry;
-(NSString *)description;
-(long long)entryType;
-(id)itemResult;
-(id)trackingEntryResult;
-(long long)branchDepth;
@end

