/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACMBasePreferences <NSObject>
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@required
-(id)preferencesValueForKey:(id)arg1;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
-(id)multiplePreferencesValuesForKeys:(id)arg1;
-(void)setMultiplePreferencesValues:(id)arg1;
-(id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(long long)arg2;
-(void)setMultiplePreferencesValues:(id)arg1 withOptions:(long long)arg2;
-(void)setPreferencesStore:(id)arg1;
-(id<ACMPreferencesStore>)preferencesStore;
-(id)preferencesValueForKey:(id)arg1 withOptions:(long long)arg2;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(long long)arg3;

@end

