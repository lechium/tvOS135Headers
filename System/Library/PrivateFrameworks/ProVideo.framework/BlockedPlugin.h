/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BlockedPlugin : NSObject {

	NSString* _bundleName;
	NSString* _plugName;
	NSString* _plugVersion;

}

@property (readonly) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (readonly) NSString * plugName;                 //@synthesize plugName=_plugName - In the implementation block
@property (readonly) NSString * plugVersion;              //@synthesize plugVersion=_plugVersion - In the implementation block
-(void)dealloc;
-(NSString *)bundleName;
-(id)init:(id)arg1 plugName:(id)arg2 plugVersion:(id)arg3 ;
-(NSString *)plugName;
-(NSString *)plugVersion;
@end

