/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PVPersonProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * anonymizedName; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) BOOL isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@required
-(unsigned long long)faceCount;
-(BOOL)hidden;
-(BOOL)isVerified;
-(void)setIsVerified:(BOOL)arg1;
-(NSString *)localIdentifier;
-(void)setKeyFace:(id)arg1;
-(long long)verifiedType;
-(void)setManualOrder:(long long)arg1;
-(BOOL)favorite;
-(id<PVFaceProtocol>)keyFace;
-(long long)manualOrder;
-(id)personLocalIdentifiers;
-(void)pv_addMergeCandidatePersons:(id)arg1;
-(NSString *)anonymizedName;

@end

