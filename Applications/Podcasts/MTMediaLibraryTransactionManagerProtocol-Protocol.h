//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol MTMediaLibraryTransactionManagerProtocol
- (void)requestMediaLibraryWriteTransaction:(_Bool (^)(MPMediaLibrary *))arg1 completion:(void (^)(_Bool))arg2;
- (void)requestMediaLibraryReadTransaction:(_Bool (^)(MPMediaLibrary *))arg1;
- (void)requestMediaLibraryWriteTransaction:(_Bool (^)(MPMediaLibrary *))arg1;
- (void)endGeneratingLibraryChangeNotifications:(void (^)(void))arg1;
- (void)beginGeneratingLibraryChangeNotifications:(void (^)(void))arg1;
@end

