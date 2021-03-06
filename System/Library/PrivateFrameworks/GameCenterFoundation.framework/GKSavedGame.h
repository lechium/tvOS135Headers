/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL;

@interface GKSavedGame : NSObject <NSCopying> {

	NSString* _name;
	NSString* _deviceName;
	NSDate* _modificationDate;
	NSURL* _fileURL;

}

@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSString * deviceName;                  //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (retain) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSDate *)modificationDate;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
@end

