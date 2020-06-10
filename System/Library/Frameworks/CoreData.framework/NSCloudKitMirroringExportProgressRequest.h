/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest {

	NSSet* _objectIDsToFetch;

}

@property (nonatomic,copy) NSSet * objectIDsToFetch;              //@synthesize objectIDsToFetch=_objectIDsToFetch - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setObjectIDsToFetch:(NSSet *)arg1 ;
-(NSSet *)objectIDsToFetch;
@end
