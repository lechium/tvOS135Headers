/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFCloudKitMetric.h>

@class NSString, NSDictionary;

@interface PFCloudKitBaseMetric : NSObject <PFCloudKitMetric> {

	NSString* _containerIdentifier;
	NSString* _processName;

}

@property (nonatomic,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * processName;                      //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * payload; 
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(NSString *)processName;
-(NSDictionary *)payload;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(NSString *)containerIdentifier;
@end
