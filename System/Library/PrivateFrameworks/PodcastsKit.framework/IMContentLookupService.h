/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, AMSLookup;

@interface IMContentLookupService : NSObject {

	NSString* _profile;
	NSString* _artworkType;
	NSArray* _ids;
	long long _version;
	AMSLookup* _amsLookup;

}

@property (nonatomic,retain) AMSLookup * amsLookup;               //@synthesize amsLookup=_amsLookup - In the implementation block
@property (nonatomic,retain) NSString * profile;                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * artworkType;              //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,retain) NSArray * ids;                       //@synthesize ids=_ids - In the implementation block
@property (assign,nonatomic) long long version;                   //@synthesize version=_version - In the implementation block
-(id)init;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(NSArray *)ids;
-(void)request:(/*^block*/id)arg1 ;
-(NSString *)profile;
-(NSString *)artworkType;
-(void)setArtworkType:(NSString *)arg1 ;
-(void)setProfile:(NSString *)arg1 ;
-(void)setIds:(NSArray *)arg1 ;
-(id)initWithIds:(id)arg1 ;
-(void)setAmsLookup:(AMSLookup *)arg1 ;
-(void)_configureRequest;
-(AMSLookup *)amsLookup;
@end
