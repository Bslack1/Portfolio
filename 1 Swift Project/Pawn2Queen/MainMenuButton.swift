//
//  MainMenuButton.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 11/16/22.
//

import SwiftUI

struct MainMenuButton: View {
    var body: some View {
        NavigationStack{
            ZStack {
                VStack {
                        Spacer()
                        HStack {
                            Spacer()
                            NavigationLink(destination: FalseMenu()){
                                Image(systemName: "house.circle.fill")
                                    .resizable(resizingMode: .stretch)
                                    .font(.largeTitle)
                                    .frame(width: 65, height: 65)
                                    .background(Color .green)
                                    .clipShape(Circle())
                                    .foregroundColor(Color .black)
                                    .padding()
                                    .shadow(radius: 5)
                        }
                    }
                }
            }
        }
    }
}

struct MainMenuButton_Previews: PreviewProvider {
    static var previews: some View {
        MainMenuButton()
    }
}
