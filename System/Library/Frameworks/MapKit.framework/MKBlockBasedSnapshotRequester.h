/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapSnapshotCreatorRequester.h>

@class NSString;

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester> {

	/*^block*/id handler;

}

@property (nonatomic,copy) id handler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotRequesterWitHandler:(/*^block*/id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4 ;
@end

