/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGPictureInPictureApplication : NSObject {

	int _processIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) int processIdentifier;                    //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(id)initWithProcessIdentifier:(int)arg1 ;
@end

