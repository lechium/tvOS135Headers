/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BYChronicleEntry : NSObject {

	NSString* _productVersion;

}

@property (nonatomic,retain) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)initWithProductVersion:(id)arg1 ;
-(BOOL)isEqualToEntry:(id)arg1 ;
-(BOOL)createdOnCurrentMajorVersion;
@end

