/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLAbstractObject;
@interface CPLPlatformObject : NSObject {

	id<CPLAbstractObject> _abstractObject;

}

@property (nonatomic,__weak,readonly) id<CPLAbstractObject> abstractObject;              //@synthesize abstractObject=_abstractObject - In the implementation block
-(id)description;
-(id)init;
-(id<CPLAbstractObject>)abstractObject;
-(id)initWithAbstractObject:(id)arg1 ;
@end

