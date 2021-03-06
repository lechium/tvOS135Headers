/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPModelSocialPerson;


@protocol MPStoreSocialRequestOperationDataSource <NSObject>
@property (nonatomic,retain) MPModelSocialPerson * person; 
@optional
-(id)fallbackBagKeys;
-(id)fallbackURLString;

@required
-(id)queryItems;
-(MPModelSocialPerson *)person;
-(void)setPerson:(id)arg1;
-(id)bagKey;
-(id)httpBody;
-(long long)httpMethod;
-(long long)httpBodyType;

@end

