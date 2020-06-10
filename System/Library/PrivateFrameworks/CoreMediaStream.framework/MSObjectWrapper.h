/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCoding;
@interface MSObjectWrapper : NSObject {

	long long _size;
	long long _uniqueID;
	id<NSObject><NSCoding> _object;
	int _errorCount;

}

@property (assign,nonatomic) long long size;                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long uniqueID;                 //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) id<NSCoding> object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) int errorCount;                     //@synthesize errorCount=_errorCount - In the implementation block
+(id)wrapperWithObject:(id)arg1 size:(long long)arg2 ;
+(long long)indexOfObject:(id)arg1 inWrapperArray:(id)arg2 ;
+(id)objectsFromWrappers:(id)arg1 ;
+(id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2 ;
-(id<NSCoding>)object;
-(long long)size;
-(long long)uniqueID;
-(void)setSize:(long long)arg1 ;
-(void)setErrorCount:(int)arg1 ;
-(int)errorCount;
-(void)setUniqueID:(long long)arg1 ;
-(id)initWithObject:(id)arg1 size:(long long)arg2 ;
@end
